//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface CSJAdClientBiddingHandle : NSObject <CSJAdClientBiddingProtocol> {
    BOOL _isSendWin;
    BOOL _isSendLoss;
    BOOL isGetURLInfo;
    id /* block */ _getMediaExtBlock;
    id /* block */ _getMaterialExtBlock;
    NSNumber *_userAuctionPrice;
    NSString *_winUrl;
    NSString *_lossUrl;
    NSString *_serverPrice;
    unsigned long long _biddingType;
}

@property (copy, nonatomic) NSNumber *userAuctionPrice;
@property (copy, nonatomic) NSString *winUrl;
@property (copy, nonatomic) NSString *lossUrl;
@property (copy, nonatomic) NSString *serverPrice;
@property (nonatomic) unsigned long long biddingType;
@property (copy, nonatomic) id /* block */ getMediaExtBlock;
@property (copy, nonatomic) id /* block */ getMaterialExtBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBiddingType:(unsigned long long)arg0;
- (BOOL)p_isClientBidding;
- (id)serverPrice;
- (id)userAuctionPrice;
- (void)setUserAuctionPrice:(id)arg0;
- (id)winUrl;
- (id)p_checkUrl:(id)arg0;
- (id)lossUrl;
- (id /* block */)getMediaExtBlock;
- (void)setWinUrl:(id)arg0;
- (void)setLossUrl:(id)arg0;
- (void)setServerPrice:(id)arg0;
- (id /* block */)getMaterialExtBlock;
- (void)p_getInfo;
- (unsigned long long)biddingType;
- (id)getAuctionPrice;
- (void)win:(id)arg0;
- (void)loss:(id)arg0 lossReason:(id)arg1 winBidder:(id)arg2;
- (void)setGetMediaExtBlock:(id /* block */)arg0;
- (void)setGetMaterialExtBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setPrice:(id)arg0;

@end
