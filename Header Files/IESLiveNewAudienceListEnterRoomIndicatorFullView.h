//
//     Generated by private class-dump
//

@class NSTimer, UIImageView, UILabel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveNewAudienceListEnterRoomIndicatorFullView : UIView {
    BOOL _isShowed;
    id /* block */ _dismissCallback;
    UILabel *_newOrderLabel;
    UILabel *_secondLineLabel;
    UIImageView *_secondLineIcon;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    NSMutableArray *_titles;
    NSTimer *_scrollTimer;
    long long _currentIndex;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (retain, nonatomic) UILabel *newOrderLabel;
@property (retain, nonatomic) UILabel *secondLineLabel;
@property (retain, nonatomic) UIImageView *secondLineIcon;

- (void)setIsShowed:(BOOL)arg0;
- (BOOL)isShowed;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg0;
- (void)invalidateCountdownTimer;
- (void)setScrollTimer:(id)arg0;
- (id)scrollTimer;
- (id)secondLineLabel;
- (void)setSecondLineLabel:(id)arg0;
- (id)newOrderLabel;
- (id)secondLineIcon;
- (void)addNewOrderName:(id)arg0;
- (void)setupSubviewsFrame;
- (void)scrollAniamation;
- (void)removeAllTitles;
- (void)setNewOrderLabel:(id)arg0;
- (void)setSecondLineIcon:(id)arg0;
- (id)concurrentQueue;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg0;
- (void)setConcurrentQueue:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupTimer;
- (id)titles;
- (void)setTitles:(id)arg0;
- (void)addTitle:(id)arg0;
- (unsigned long long)titlesCount;
- (id)titleAtIndex:(unsigned long long)arg0;
- (id)leftLabel;
- (id)rightLabel;
- (void)setupViews;
- (void)setLeftLabel:(id)arg0;
- (id)initWithTitles:(id)arg0;
- (void)setRightLabel:(id)arg0;

@end