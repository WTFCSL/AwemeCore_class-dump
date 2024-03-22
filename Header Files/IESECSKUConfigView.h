//
//     Generated by private class-dump
//

@class NSArray, NSNumber, IESECLStackContainerView;

@interface IESECSKUConfigView : UIView {
    BOOL _alignRight;
    id /* block */ _onLayoutBlock;
    NSArray *_contents;
    NSNumber *_height;
    IESECLStackContainerView *_stackContainer;
}

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSNumber *height;
@property (nonatomic) BOOL alignRight;
@property (retain, nonatomic) IESECLStackContainerView *stackContainer;
@property (copy, nonatomic) id /* block */ onLayoutBlock;

- (void)configUI;
- (id /* block */)onLayoutBlock;
- (void)setOnLayoutBlock:(id /* block */)arg0;
- (BOOL)alignRight;
- (void)setAlignRight:(BOOL)arg0;
- (void)setStackContainer:(id)arg0;
- (id)stackContainer;
- (id)initWithContents:(id)arg0 height:(id)arg1 alignRight:(BOOL)arg2;
- (void).cxx_destruct;
- (id)height;
- (id)contents;
- (void)setContents:(id)arg0;
- (void)setHeight:(id)arg0;

@end