//
//     Generated by private class-dump
//

@class IESECWinTabContainerObject, IESECServiceProxy;
@protocol IESECWinFeedMapperService, IESECWinSplitService;

@interface IESECWinTabContainerCellController : IESECWinTabContainerSectionController {
    IESECWinTabContainerObject *_object;
    IESECServiceProxy<IESECWinFeedMapperService> *_mapper;
    IESECServiceProxy<IESECWinSplitService> *_splitService;
}

@property (retain, nonatomic) IESECWinTabContainerObject *object;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedMapperService> *mapper;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;

+ (Class)cellClass;

- (void)configCell;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1 bffItemData:(id)arg2;
- (void)setCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1 withSectionID:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCustomCellFrameWithSectionID:(id)arg0 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (id)splitService;
- (void)setSplitService:(id)arg0;
- (void).cxx_destruct;
- (id)mapper;
- (id)object;
- (void)setObject:(id)arg0;
- (void)setMapper:(id)arg0;

@end
