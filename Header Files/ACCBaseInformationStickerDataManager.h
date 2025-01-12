//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, NSMutableArray;
@protocol ACCStickerPannelLogger;

@interface ACCBaseInformationStickerDataManager : NSObject <ACCUserServiceMessage> {
    BOOL _isRequestOnAir;
    BOOL _isLoginStateChange;
    NSString *_pannelName;
    NSArray *_stickerCategories;
    NSArray *_stickerEffects;
    NSDictionary *_trackExtraDic;
    NSString *_requestID;
    id<ACCStickerPannelLogger> _logger;
    NSMutableArray *_comletionArray;
}

@property (copy, nonatomic) NSArray *stickerCategories;
@property (copy, nonatomic) NSArray *stickerEffects;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isLoginStateChange;
@property (retain, nonatomic) NSMutableArray *comletionArray;
@property (copy, nonatomic) NSString *pannelName;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSString *requestID;
@property (weak, nonatomic) id<ACCStickerPannelLogger> logger;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)setTrackExtraDic:(id)arg0;
- (id)trackExtraDic;
- (void)setPannelName:(id)arg0;
- (id)comletionArray;
- (BOOL)isLoginStateChange;
- (void)setStickerCategories:(id)arg0;
- (void)setStickerEffects:(id)arg0;
- (void)setIsLoginStateChange:(BOOL)arg0;
- (void)downloadStickersWithCompletion:(id /* block */)arg0;
- (id)pannelName;
- (id)stickerCategories;
- (id)stickerEffects;
- (void)setComletionArray:(id)arg0;
- (id)logger;
- (id)init;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLogger:(id)arg0;

@end
