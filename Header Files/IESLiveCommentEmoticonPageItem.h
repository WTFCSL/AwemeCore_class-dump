//
//     Generated by private class-dump
//

@class NSString, UIImage, NSDictionary;

@interface IESLiveCommentEmoticonPageItem : NSObject {
    BOOL _selected;
    BOOL _showRedDot;
    NSString *_itemTitle;
    UIImage *_itemDefaultIcon;
    double _selectIconAlpha;
    double _unselectIconAlpha;
    NSString *_selectIconURL;
    NSString *_unselectIconURL;
    long long _emoticonType;
    Class _pageViewClass;
    id /* block */ _emoticonPageView;
    id /* block */ _enableCheck;
    id /* block */ _enableEntranceRedDotCheck;
    id /* block */ _onItemTapped;
    id /* block */ _onItemDeselected;
    id /* block */ _onItemShow;
    id /* block */ _pageDidShow;
    id /* block */ _pageDidCreate;
    NSDictionary *_trackParams;
}

@property (copy, nonatomic) NSString *itemTitle;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showRedDot;
@property (retain, nonatomic) UIImage *itemDefaultIcon;
@property (nonatomic) double selectIconAlpha;
@property (nonatomic) double unselectIconAlpha;
@property (copy, nonatomic) NSString *selectIconURL;
@property (copy, nonatomic) NSString *unselectIconURL;
@property (nonatomic) long long emoticonType;
@property (retain, nonatomic) Class pageViewClass;
@property (copy, nonatomic) id /* block */ emoticonPageView;
@property (copy, nonatomic) id /* block */ enableCheck;
@property (copy, nonatomic) id /* block */ enableEntranceRedDotCheck;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemDeselected;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (copy, nonatomic) id /* block */ pageDidShow;
@property (copy, nonatomic) id /* block */ pageDidCreate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *trackParams;

- (BOOL)showRedDot;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (long long)emoticonType;
- (void)setShowRedDot:(BOOL)arg0;
- (void)setOnItemTapped:(id /* block */)arg0;
- (void)setOnItemShow:(id /* block */)arg0;
- (id /* block */)onItemTapped;
- (id /* block */)onItemShow;
- (id /* block */)pageDidShow;
- (void)setEmoticonType:(long long)arg0;
- (id)itemDefaultIcon;
- (void)setItemDefaultIcon:(id)arg0;
- (double)selectIconAlpha;
- (void)setSelectIconAlpha:(double)arg0;
- (double)unselectIconAlpha;
- (void)setUnselectIconAlpha:(double)arg0;
- (id)selectIconURL;
- (void)setSelectIconURL:(id)arg0;
- (id)unselectIconURL;
- (void)setUnselectIconURL:(id)arg0;
- (Class)pageViewClass;
- (void)setPageViewClass:(Class)arg0;
- (id /* block */)emoticonPageView;
- (void)setEmoticonPageView:(id /* block */)arg0;
- (id /* block */)enableCheck;
- (void)setEnableCheck:(id /* block */)arg0;
- (id /* block */)enableEntranceRedDotCheck;
- (void)setEnableEntranceRedDotCheck:(id /* block */)arg0;
- (id /* block */)onItemDeselected;
- (void)setOnItemDeselected:(id /* block */)arg0;
- (void)setPageDidShow:(id /* block */)arg0;
- (id /* block */)pageDidCreate;
- (void)setPageDidCreate:(id /* block */)arg0;
- (BOOL)selected;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (void)setSelected:(BOOL)arg0;
- (id)itemTitle;
- (void)setItemTitle:(id)arg0;

@end