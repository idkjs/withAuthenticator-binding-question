import Amplify from 'aws-amplify';
import {app as App } from '../re/App.bs';
import awsconfig from '../aws-exports';
// import { withAuthenticator } from 'aws-amplify-react';
import WithAuthenticator from '../aws/WithAuthenticator.bs';
import '../App.css';
Amplify.configure(awsconfig);

// let AppComponent = WithAuthenticator(App, true);
// export default AppComponent;
// export default App;
export default WithAuthenticator(App, true);