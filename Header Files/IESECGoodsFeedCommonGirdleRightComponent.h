//
//     Generated by private class-dump
//

@class UIView;

@interface IESECGoodsFeedCommonGirdleRightComponent : NSObject {
    UIView *_view;
    id /* block */ _updateBlock;
    id /* block */ _layoutBlock;
}

@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ layoutBlock;

+ (id)componentWithView:(id)arg0 layoutBlock:(id /* block */)arg1 updateBlock:(id /* block */)arg2;

- (void)updateWithParameters:(id)arg0;
- (void)setLayoutBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (id /* block */)updateBlock;
- (void)layout;
- (id)view;
- (void)setUpdateBlock:(id /* block */)arg0;
- (id /* block */)layoutBlock;

@end
