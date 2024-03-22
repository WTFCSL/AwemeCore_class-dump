//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol BDPrivacyCertProtocol;

@interface AWEAddressBookUploadOptionModel : NSObject {
    BOOL _needLoadingView;
    BOOL _isInitiative;
    BOOL _showAddressbookList;
    BOOL _needUpload;
    BOOL _isFirstFunction;
    NSDictionary *_trackParams;
    NSString *_enterFrom;
    id<BDPrivacyCertProtocol> _requestCert;
    id<BDPrivacyCertProtocol> _loadCert;
}

@property (nonatomic) BOOL needLoadingView;
@property (nonatomic) BOOL isInitiative;
@property (nonatomic) BOOL showAddressbookList;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> requestCert;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> loadCert;
@property (nonatomic) BOOL needUpload;
@property (nonatomic) BOOL isFirstFunction;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (BOOL)needUpload;
- (void)setNeedUpload:(BOOL)arg0;
- (id)loadCert;
- (void)setRequestCert:(id)arg0;
- (void)setLoadCert:(id)arg0;
- (void)setIsFirstFunction:(BOOL)arg0;
- (id)requestCert;
- (BOOL)isFirstFunction;
- (BOOL)isInitiative;
- (BOOL)showAddressbookList;
- (void)setShowAddressbookList:(BOOL)arg0;
- (BOOL)needLoadingView;
- (void)setNeedLoadingView:(BOOL)arg0;
- (void)setIsInitiative:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end