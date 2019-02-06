
let component = ReasonReact.statelessComponent("Page");
let make = (_) => {
    ...component,
    render: _self => {
        <div>
            <MainHeader  title="LetMeGo" />
            <MainSidebar />
            <ContentWrapper>

                /**Linha 01 */
                <Box.Row>
                    <Box.Col size=8 >
                        <Box.Primary>
                            <Box.Header>
                                <Box.Title text="Cadastro de clientes" />
                            </Box.Header>
                        </Box.Primary>
                        <Box.Body>
                            <Button typeButton="btn-primary" size="btn-xs" text="Clique aqui" />
                        </Box.Body>
                        <Box.Footer>
                        
                        </Box.Footer>
                    </Box.Col>
                </Box.Row>

            </ContentWrapper>
        </div>
    }
};
