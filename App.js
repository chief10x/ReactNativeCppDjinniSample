/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import React from 'react';
import {
  SafeAreaView,
  StyleSheet,
  Text,
  NativeModules
} from 'react-native';

// The NativeModules will extract out module for us
const { StringMessage } = NativeModules

export default class App extends React.Component {
  
  state = {
    message: "A new Message!"
  }

  async componentDidMount() {

    StringMessage.newMessage()
      .then( message => 
        this.setState({
          message
        }))
      .catch( error => console.log(error) )
  }

  render() {
    return(
      <SafeAreaView style={styles.container}>

        <Text>{this.state.message}</Text>

      </SafeAreaView>
    )
  }

};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center'
  }
});