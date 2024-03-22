//
//     Generated by private class-dump
//

@class IESECWinTabObject, IESECServiceProxy;
@protocol IESECWinTabService, IESECWinDataService, IESECWinFeedMapperService, IESECWinSplitService;

@interface IESECWinTabCellController : IESECWinTabSectionController {
    IESECWinTabObject *_object;
    IESECServiceProxy<IESECWinTabService> *_tabService;
    IESECServiceProxy<IESECWinDataService> *_dataService;
    IESECServiceProxy<IESECWinSplitService> *_splitService;
    IESECServiceProxy<IESECWinFeedMapperService> *_mapper;
}

@property (retain, nonatomic) IESECWinTabObject *object;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedMapperService> *mapper;

+ (Class)cellClass;

- (id)dataService;
- (void)setDataService:(id)arg0;
- (void)configCell;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1 bffItemData:(id)arg2;
- (void)setCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1 withSectionID:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCustomCellFrameWithSectionID:(id)arg0 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (id)splitService;
- (void)setSplitService:(id)arg0;
- (id)tabService;
- (void)setTabService:(id)arg0;
- (void).cxx_destruct;
- (id)mapper;
- (id)object;
- (void)setObject:(id)arg0;
- (void)setMapper:(id)arg0;

@end
