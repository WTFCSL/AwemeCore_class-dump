//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEFeedActivityTopBarItemImageModel, NSMutableArray;
@protocol AWEFeedActivityChannelInfoProtocol, AWEHPActivityItemManagerDelegate;

@interface AWEActicityItemManager : AWEActivityBasicManager <AWEActivityConditionManagerDelegate, AWEHPActivityItemManagerProtocol> {
    id<AWEHPActivityItemManagerDelegate> _itemManagerDelegate;
    AWEFeedActivityTopBarItemImageModel *_currentModel;
    NSString *_defualtTitle;
    id<AWEFeedActivityChannelInfoProtocol> _model;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) NSMutableArray *managers;
@property (retain, nonatomic) id<AWEFeedActivityChannelInfoProtocol> model;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AWEFeedActivityTopBarItemImageModel *currentModel;
@property (copy, nonatomic) NSString *defualtTitle;
@property (weak, nonatomic) id<AWEHPActivityItemManagerDelegate> itemManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraInfo:(id)arg0;
- (id)initWithData:(id)arg0 extraInfo:(id)arg1;
- (void)setData:(id)arg0 extraInfo:(id)arg1;
- (void)setDefualtTitle:(id)arg0;
- (void)injectConditionManagers:(id)arg0;
- (void)checkStatusIfNeed;
- (id)objcs;
- (id)itemManagerDelegate;
- (id)defualtTitle;
- (void)setItemManagerDelegate:(id)arg0;
- (void)setModel:(id)arg0;
- (void)timing;
- (void).cxx_destruct;
- (id)model;
- (void)addObject:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)extraInfo;

@end
