
let component = ReasonReact.statelessComponent("MainHeader");

let make = (~titleMini, ~titleLarge, _children) => {
  ...component,
  render: _self =>
    <div className="wrapper">
        <header className="main-header">
            <a href="/" className="logo">
                <span className="logo-mini">(ReasonReact.string(titleMini))</span>
                <span className="logo-lg">(ReasonReact.string(titleLarge))</span>
            </a>
        </header>
    </div>,
};
