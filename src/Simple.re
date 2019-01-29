let component = ReasonReact.statelessComponent("Page");
let handleClick = (_event, _self) => Js.log("Clicado");

let make = (~message, _children) => {
    ...component,
    render: self => 
        <div onClick={self.handle(handleClick)}>{ReasonReact.string(message)}</div>
}