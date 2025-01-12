//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSDictionary, IESLiveMultiOrderSingApi, HTSLiveRoomLinkMicSyncData, IESLiveInteractiveListAPI, IESLiveInteractionLayout;
@protocol IESLiveBigPartyPreStreamUserServiceDelegate, IESLiveBigPartyPreStreamUserServiceDataSource;

@interface IESLiveBigPartyPreStreamUserService : NSObject {
    BOOL _enableFilterNoPUser;
    BOOL _isFetchingList;
    BOOL _isOChannel;
    id<IESLiveBigPartyPreStreamUserServiceDelegate> _delegate;
    id<IESLiveBigPartyPreStreamUserServiceDataSource> _dataSource;
    NSArray *_listModel;
    NSDictionary *_othersMembersList;
    NSArray *_lastGrids;
    IESLiveMultiOrderSingApi *_multiOrderSingApi;
    IESLiveInteractiveListAPI *_api;
    IESLiveInteractionLayout *_lastLayout;
    NSNumber *_roomID;
    HTSLiveRoomLinkMicSyncData *_lastWRDSData;
}

@property (copy, nonatomic) NSArray *lastGrids;
@property (copy, nonatomic) NSArray *listModel;
@property (copy, nonatomic) NSDictionary *othersMembersList;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *multiOrderSingApi;
@property (retain, nonatomic) IESLiveInteractiveListAPI *api;
@property (nonatomic) BOOL enableFilterNoPUser;
@property (nonatomic) BOOL isFetchingList;
@property (retain, nonatomic) IESLiveInteractionLayout *lastLayout;
@property (nonatomic) BOOL isOChannel;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSLiveRoomLinkMicSyncData *lastWRDSData;
@property (weak, nonatomic) id<IESLiveBigPartyPreStreamUserServiceDelegate> delegate;
@property (weak, nonatomic) id<IESLiveBigPartyPreStreamUserServiceDataSource> dataSource;

- (void)setListModel:(id)arg0;
- (id)othersMembersList;
- (void)fetchList;
- (BOOL)isEnlargeModeWithUserList:(id)arg0;
- (void)clearListInformation;
- (void)updateWithWRDSResult:(id)arg0 force:(BOOL)arg1;
- (void)updateWithSEIResult:(id)arg0;
- (id)initWithRoomID:(id)arg0 anchorID:(id)arg1 isOChannel:(BOOL)arg2;
- (void)setLastGrids:(id)arg0;
- (void)setIsFetchingList:(BOOL)arg0;
- (void)setLastWRDSData:(id)arg0;
- (void)processWithServerList:(id)arg0 otherLinkerContent:(id)arg1 micPostionItem:(id)arg2;
- (BOOL)enableFilterNoPUser;
- (id)lastGrids;
- (id)otherUserByLinkmicID:(id)arg0;
- (BOOL)needUpdateLinkTypeFromSEI;
- (id)lastLayout;
- (id)logStrWithGrids:(id)arg0;
- (id)logStrForList:(id)arg0;
- (void)setLastLayout:(id)arg0;
- (id)lastWRDSData;
- (BOOL)isFetchingList;
- (BOOL)isOChannel;
- (id)transformOtherMembersList:(id)arg0;
- (void)setOthersMembersList:(id)arg0;
- (id)sortListModelByPostionAndType:(id)arg0;
- (BOOL)enableSeatLabel;
- (BOOL)isInPlayMode:(long long)arg0;
- (id)multiOrderSingApi;
- (void)setMultiOrderSingApi:(id)arg0;
- (void)setEnableFilterNoPUser:(BOOL)arg0;
- (void)setIsOChannel:(BOOL)arg0;
- (id)listModel;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
