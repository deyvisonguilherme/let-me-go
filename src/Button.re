let component = ReasonReact.statelessComponent("Button");
let make = (~typeButton: string, ~size: string, ~text: string, _children) => {
    ...component,
    render: _=>{
        <button type_="button" className={"btn btn-block " ++ typeButton ++ " " ++ size}>(ReasonReact.string(text))</button>
    }
};