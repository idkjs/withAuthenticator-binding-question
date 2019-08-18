
// import React from 'react';
// import logo from './logo.svg';
import Amplify from 'aws-amplify';
import {app as App } from './App.bs';
import awsconfig from './aws-exports';
// import { withAuthenticator } from 'aws-amplify-react';
import WithAuthenticator from './aws/WithAuthenticator.bs';
import './App.css';
Amplify.configure(awsconfig);

// let AppComponent = WithAuthenticator(App, true);
// export default AppComponent;
export default WithAuthenticator(App, true);;