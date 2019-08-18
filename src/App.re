[%raw "require('./App.css')"];
let logo = [%raw "require('./logo.svg')"];
[@react.component]
let make = () => {
  <div className="App">
    <header className="App-header">
      <img src={logo} className="App-logo" alt="logo" />

        <p>
          {"Edit <code>src/App.js</code> and save to reload." |> React.string}
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer">
          {"Learn React" |> React.string}
        </a>
      </header>
  </div>;
};
let app = make;