//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface DUXTextFieldStringViewAction : NSObject <DUXTextFieldContent> {
    id /* block */ didClickAction;
    NSString *_string;
    UILabel *_label;
    UIView *_contentView;
    struct CGSize { double width; double height; } actionSize;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithString:(id)arg0 clickAction:(id /* block */)arg1;
+ (id)actionWithString:(id)arg0;

- (id)duxTextField_view;
- (void)setDidClickAction:(id /* block */)arg0;
- (id /* block */)didClickAction;
- (struct CGSize { double x0; double x1; })actionSize;
- (void)setActionSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didClickContentView;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (void)setString:(id)arg0;
- (id)contentView;
- (id)label;
- (id)string;
- (void)setContentView:(id)arg0;

@end