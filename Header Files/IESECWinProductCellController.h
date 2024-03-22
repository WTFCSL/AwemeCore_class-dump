//
//     Generated by private class-dump
//

@class IESECServiceProxy;
@protocol IESECWinTabService, IESECWinFeedService;

@interface IESECWinProductCellController : IESECWinGoodsSectionController {
    IESECServiceProxy<IESECWinTabService> *_tabService;
    IESECServiceProxy<IESECWinFeedService> *_feedService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)feedService;
- (void)configCell;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1 bffItemData:(id)arg2;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (void)didEndDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (id)tabService;
- (void)setTabService:(id)arg0;
- (void)setFeedService:(id)arg0;
- (void).cxx_destruct;

@end
