[@bs.deriving abstract]
type props = {
  [@bs.as "Comp"]
  comp: React.element,
  [@bs.optional] includeGreetings: bool,
};

[@genType.import ("aws-amplify-react", "withAuthenticator")] [@react.component]
external make:(
    ~props:props,
  ) => React.element = "withAuthenticator";
let default = make;
// `withAuthenticator` is coming from the Auth module which is exported in index.js here: https://github.com/aws-amplify/amplify-js/blob/master/packages/aws-amplify-react/src/index.jsx
// this `withAuthenticator in the `Auth/index.jsx` file: https://github.com/aws-amplify/amplify-js/blob/master/packages/aws-amplify-react/src/Auth/index.jsx
// [@bs.module "aws-amplify-react"]
// [@bs.scope "withAuthenticator"]
// [@react.component]
// external make: props => React.element = "withAuthenticator";