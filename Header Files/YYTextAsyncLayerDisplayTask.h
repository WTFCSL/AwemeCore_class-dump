//
//     Generated by private class-dump
//

@interface YYTextAsyncLayerDisplayTask : NSObject {
    id /* block */ _willDisplay;
    id /* block */ _display;
    id /* block */ _didDisplay;
}

@property (copy, nonatomic) id /* block */ willDisplay;
@property (copy, nonatomic) id /* block */ display;
@property (copy, nonatomic) id /* block */ didDisplay;

- (id /* block */)didDisplay;
- (void)setWillDisplay:(id /* block */)arg0;
- (void)setDidDisplay:(id /* block */)arg0;
- (void)setDisplay:(id /* block */)arg0;
- (void).cxx_destruct;
- (id /* block */)display;
- (id /* block */)willDisplay;

@end
