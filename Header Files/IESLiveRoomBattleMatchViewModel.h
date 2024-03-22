//
//     Generated by private class-dump
//

@class IESLiveRoomBattleMatchWaitingContent, NSString, IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent, IESLiveLinkMicProfitRoomBattleRandomMatchReservationContent, IESLiveRoomBattleApi;
@protocol IESLiveRoomService, IESLiveRoomBattleMatchViewModelDelegate;

@interface IESLiveRoomBattleMatchViewModel : NSObject {
    BOOL _needAutoMatch;
    BOOL _didTrackButtonShow;
    int _matchType;
    id<IESLiveRoomService> _room;
    long long _status;
    id<IESLiveRoomBattleMatchViewModelDelegate> _deleagte;
    IESLiveLinkMicProfitRoomBattleRandomMatchReservationContent *_reserveContent;
    IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent *_matchingContent;
    IESLiveRoomBattleMatchWaitingContent *_waitingContent;
    IESLiveRoomBattleApi *_api;
    NSString *_requestPage;
}

@property (retain, nonatomic) IESLiveRoomBattleApi *api;
@property (nonatomic) BOOL needAutoMatch;
@property (copy, nonatomic) NSString *requestPage;
@property (nonatomic) BOOL didTrackButtonShow;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<IESLiveRoomBattleMatchViewModelDelegate> deleagte;
@property (retain, nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchReservationContent *reserveContent;
@property (retain, nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent *matchingContent;
@property (retain, nonatomic) IESLiveRoomBattleMatchWaitingContent *waitingContent;
@property (nonatomic) int matchType;

- (id)deleagte;
- (void)setDeleagte:(id)arg0;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (id)matchingContent;
- (void)matchSuccess:(id)arg0;
- (BOOL)isSelfMatchSuccess;
- (void)autoMatchWithType:(int)arg0;
- (BOOL)isSelfMatching;
- (id)initWithMatchType:(int)arg0;
- (id)reserveContent;
- (void)trackMatchButtonShow:(long long)arg0;
- (void)trackMatchButtonClick:(long long)arg0;
- (void)startReserve;
- (void)cancelReserve;
- (void)setNeedAutoMatch:(BOOL)arg0;
- (BOOL)needAutoMatch;
- (void)setDidTrackButtonShow:(BOOL)arg0;
- (void)setReserveContent:(id)arg0;
- (void)setMatchingContent:(id)arg0;
- (id)waitingContent;
- (void)startWaiting;
- (void)trackMatchResult:(BOOL)arg0;
- (void)setWaitingContent:(id)arg0;
- (void)requestSpeedupMatch;
- (BOOL)iamOperator;
- (BOOL)didTrackButtonShow;
- (id)buttonCommonTrackParams:(long long)arg0;
- (void)fetchEntrance:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (int)matchType;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)cancelMatching;
- (id)api;
- (void)setMatchType:(int)arg0;
- (BOOL)isMatching;
- (void)startMatching;
- (void)setApi:(id)arg0;

@end
