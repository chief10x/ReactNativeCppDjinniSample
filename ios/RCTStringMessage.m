#import "RCTStringMessage.h"
#import "SMStringMessage.h"

@implementation RCTStringMessage {
  SMStringMessage *_cppApi;
}

- (RCTStringMessage *)init {
  
  self = [super init];
  _cppApi = [SMStringMessage create];
  return self;
}

+ (BOOL)requiresMainQueueSetup {
  
  return NO;
}

RCT_EXPORT_MODULE();

RCT_REMAP_METHOD(newMessage,
                 resolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
  
  NSString *response = [_cppApi getStringMessage];
  
  resolve(response);
}
@end
