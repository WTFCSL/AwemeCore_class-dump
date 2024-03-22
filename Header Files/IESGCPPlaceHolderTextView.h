//
//     Generated by private class-dump
//

@class UITextView, NSString, UIColor, UIFont;

@interface IESGCPPlaceHolderTextView : UITextView {
    NSString *_iesgcp_placeHolder;
    UIColor *_iesgcp_placeHolderColor;
    UIFont *_iesgcp_placeHolderFont;
    UITextView *_iesgcp_placeHolderTextView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _iesgcp_placeHolderEdgeInsets;
}

@property (retain, nonatomic) UITextView *iesgcp_placeHolderTextView;
@property (retain, nonatomic) NSString *iesgcp_placeHolder;
@property (retain, nonatomic) UIColor *iesgcp_placeHolderColor;
@property (retain, nonatomic) UIFont *iesgcp_placeHolderFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } iesgcp_placeHolderEdgeInsets;

- (id)iesgcp_placeHolder;
- (id)iesgcp_placeHolderTextView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iesgcp_placeHolderEdgeInsets;
- (id)iesgcp_placeHolderFont;
- (id)iesgcp_placeHolderColor;
- (void)setIesgcp_placeHolderTextView:(id)arg0;
- (void)iesgcp_showOrHidePlaceHolderTextView;
- (void)setIesgcp_placeHolder:(id)arg0;
- (void)setIesgcp_placeHolderColor:(id)arg0;
- (void)setIesgcp_placeHolderFont:(id)arg0;
- (void)setIesgcp_placeHolderEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;

@end