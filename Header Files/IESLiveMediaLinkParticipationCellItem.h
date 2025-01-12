//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESLiveRivalExtraInfo;
@protocol IESLiveRoomService;

@interface IESLiveMediaLinkParticipationCellItem : IESLiveDynamicModel {
    IESLiveMediaLinkParticipationCellItem *_nextBarItem;
    id /* block */ _operateAction;
}

@property (nonatomic) unsigned long long listType;
@property (nonatomic) BOOL isBarItem;
@property (copy, nonatomic) NSString *barTip;
@property (nonatomic) BOOL isActiveBarIitem;
@property (weak, nonatomic) IESLiveMediaLinkParticipationCellItem *nextBarItem;
@property (nonatomic) long long curDataSourceCount;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) id<IESLiveRoomService> anchorInfo;
@property (retain, nonatomic) IESLiveRivalExtraInfo *rivalExtraInfo;
@property (copy, nonatomic) NSDictionary *linkerExtraInfo;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ operateAction;

- (BOOL)isPKOnGoing;
- (BOOL)isOhterLinking;
- (BOOL)isMultiPKOnGoing;
- (BOOL)isScreencastLinking;
- (id /* block */)operateAction;
- (id)nextBarItem;
- (BOOL)isInvitationAllowed;
- (void)setNextBarItem:(id)arg0;
- (void)setOperateAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (double)cellHeight;

@end
