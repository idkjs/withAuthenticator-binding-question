
let props = {
  WithAuthenticator.props(
    ~comp={
      <App />;
    },
    ~includeGreetings=true,
    (),
  );
};
Js.log(props);
[@react.component]
let app = () => <WithAuthenticator props />;