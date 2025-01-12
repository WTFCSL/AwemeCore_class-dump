//
//     Generated by private class-dump
//

@class NSString, IESECOrderBottomBarShowConfig, NSDate, NSMutableArray;

@interface IESECOrderBottomBarManager : NSObject {
    NSMutableArray *_showTimeList;
    NSMutableArray *_clickTimeList;
    NSMutableArray *_closeTimeList;
    BOOL _hasShownWidget;
    BOOL _shouldShowAfterEndScroll;
    NSString *_userID;
    double _startScrollOffsetY;
    IESECOrderBottomBarShowConfig *_config;
    NSDate *_unfrozenDate;
}

@property (retain, nonatomic) NSString *userID;
@property (nonatomic) double startScrollOffsetY;
@property (retain, nonatomic) IESECOrderBottomBarShowConfig *config;
@property (nonatomic) BOOL shouldShowAfterEndScroll;
@property (retain, nonatomic) NSDate *unfrozenDate;

- (BOOL)canShow;
- (BOOL)recordShow;
- (void)recordClose;
- (void)updateFreezeDateWithShowTimeListAndConfig;
- (id)unfrozenDate;
- (void)freezeToDate:(id)arg0;
- (void)setStartScrollOffsetY:(double)arg0;
- (void)setShouldShowAfterEndScroll:(BOOL)arg0;
- (double)startScrollOffsetY;
- (BOOL)shouldShowAfterEndScroll;
- (void)setUnfrozenDate:(id)arg0;
- (void)recordClick;
- (void)startScrollWithScrollView:(id)arg0;
- (BOOL)shouldHideBottomBarAfterScrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndScrollWithCompletion:(id /* block */)arg0;
- (id)userID;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setUserID:(id)arg0;
- (id)initWithConfig:(id)arg0;

@end
