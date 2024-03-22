//
//     Generated by private class-dump
//

@class IESECGoodsDetailHeaderTabComponentData, NSMutableDictionary, UIImageView, UILabel, NSMutableArray, UIView;
@protocol IESECGoodsDetailHeaderTabViewDelegate;

@interface IESECGoodsDetailHeaderTabView : UIView {
    BOOL _isSmallMode;
    UIView *_slideView;
    NSMutableArray *_tabLabels;
    UILabel *_tabWhenFold;
    unsigned long long _nowIndex;
    unsigned long long _nowTabIndex;
    unsigned long long _actionType;
    id<IESECGoodsDetailHeaderTabViewDelegate> _delegate;
    IESECGoodsDetailHeaderTabComponentData *_data;
    long long _totalIndex;
    UIImageView *_moreImageView;
    NSMutableDictionary *_foldStateDict;
}

@property (retain, nonatomic) UIView *slideView;
@property (retain, nonatomic) NSMutableArray *tabLabels;
@property (retain, nonatomic) UILabel *tabWhenFold;
@property (nonatomic) unsigned long long nowIndex;
@property (nonatomic) unsigned long long nowTabIndex;
@property (nonatomic) unsigned long long actionType;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTabViewDelegate> delegate;
@property (retain, nonatomic) IESECGoodsDetailHeaderTabComponentData *data;
@property (nonatomic) long long totalIndex;
@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (retain, nonatomic) NSMutableDictionary *foldStateDict;

- (long long)totalIndex;
- (void)setTotalIndex:(long long)arg0;
- (void)setMoreImageView:(id)arg0;
- (id)moreImageView;
- (id)slideView;
- (void)setSlideView:(id)arg0;
- (unsigned long long)nowIndex;
- (void)setNowIndex:(unsigned long long)arg0;
- (void)setTabLabels:(id)arg0;
- (id)tabLabels;
- (BOOL)isSmallMode;
- (void)setIsSmallMode:(BOOL)arg0;
- (void)tapPageTab:(id)arg0;
- (void)foldTabs;
- (void)cancelFold;
- (unsigned long long)indexToTabIndex:(unsigned long long)arg0;
- (void)setNowTabIndex:(unsigned long long)arg0;
- (unsigned long long)indexToTabPageIndex:(unsigned long long)arg0;
- (id)tabString:(unsigned long long)arg0;
- (id)tabWhenFold;
- (id)tabLabel:(unsigned long long)arg0;
- (void)slideViewAnimate:(id)arg0;
- (void)updateFoldState;
- (id)foldStateDict;
- (id)initWithTabs:(id)arg0 initIndex:(unsigned long long)arg1;
- (void)setTabWhenFold:(id)arg0;
- (unsigned long long)nowTabIndex;
- (void)setFoldStateDict:(id)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (id)data;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end