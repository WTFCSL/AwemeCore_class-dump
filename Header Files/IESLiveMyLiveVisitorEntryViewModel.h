//
//     Generated by private class-dump
//

@class HTSLiveLynxContainer, NSMutableDictionary, HTSLiveMyLiveCarouselItem_CarouselItem, IESLiveProfileUpperArea;

@interface IESLiveMyLiveVisitorEntryViewModel : NSObject {
    IESLiveProfileUpperArea *_metaData;
    HTSLiveMyLiveCarouselItem_CarouselItem *_currentDisplayItem;
    HTSLiveLynxContainer *_lynxContainer;
    NSMutableDictionary *_itemShownDic;
}

@property (retain, nonatomic) IESLiveProfileUpperArea *metaData;
@property (retain, nonatomic) NSMutableDictionary *itemShownDic;
@property (retain, nonatomic) HTSLiveMyLiveCarouselItem_CarouselItem *currentDisplayItem;
@property (retain, nonatomic) HTSLiveLynxContainer *lynxContainer;

- (id)lynxContainer;
- (void)setLynxContainer:(id)arg0;
- (id)initWithMetaData:(id)arg0 diContext:(id)arg1;
- (id)currentDisplayItem;
- (id)itemShownDic;
- (id)commonParamsForItem:(id)arg0;
- (void)trackCurrentItemShow;
- (void)trackClickCurrentItem;
- (void)setCurrentDisplayItem:(id)arg0;
- (void)setItemShownDic:(id)arg0;
- (id)metaData;
- (void).cxx_destruct;
- (void)setMetaData:(id)arg0;

@end
