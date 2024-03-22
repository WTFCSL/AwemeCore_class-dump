//
//     Generated by private class-dump
//

@class UIView, AWECaptionInfoModel, NSString, UIImageView, NSDictionary, UIButton, AWEURLModel, UILabel;

@interface AWESearchBubbleEntranceView : UIControl {
    int _showStyle;
    NSString *_text;
    NSString *_link;
    NSString *_enterMethod;
    NSString *_itemId;
    NSString *_authorId;
    NSDictionary *_logPb;
    AWECaptionInfoModel *_captionInfo;
    AWEURLModel *_iconUrl;
    UILabel *_label;
    UIButton *_closeButton;
    id /* block */ _searchButtonDidClick;
    UIButton *_searchIcon;
    UIView *_focusView;
    UIImageView *_captionIcon;
    UIView *_separatorLine;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *searchIcon;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIImageView *captionIcon;
@property (retain, nonatomic) UIView *separatorLine;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *authorId;
@property (retain, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) AWECaptionInfoModel *captionInfo;
@property (nonatomic) int showStyle;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) id /* block */ searchButtonDidClick;

+ (double)bubbleWidthWithText:(id)arg0 iconUrl:(id)arg1 showStyle:(int)arg2;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (int)showStyle;
- (void)setLogPb:(id)arg0;
- (id)logPb;
- (void)setShowStyle:(int)arg0;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg0;
- (void)setSearchButtonDidClick:(id /* block */)arg0;
- (void)setupControl;
- (id)captionIcon;
- (void)searchIconClicked:(id)arg0;
- (void)setCaptionIcon:(id)arg0;
- (id /* block */)searchButtonDidClick;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)text;
- (id)label;
- (id)link;
- (void)layoutSubviews;
- (id)focusView;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)itemId;
- (void)setItemId:(id)arg0;
- (void)setFocusView:(id)arg0;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;
- (id)captionInfo;
- (void)setCaptionInfo:(id)arg0;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end
