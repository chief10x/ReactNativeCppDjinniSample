#import "RCTStringMessage.h"

@implementation RCTStringMessage

RCT_EXPORT_MODULE();

RCT_REMAP_METHOD(newMessage,
                 resolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
  resolve(@"Cazzo For real!");
}
@end
