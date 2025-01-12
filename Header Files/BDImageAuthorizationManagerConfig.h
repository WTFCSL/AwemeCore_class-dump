//
//     Generated by private class-dump
//

@class BDWebImageStartUpConfig, NSArray, NSDictionary, NSString, BDWebImageAuthorizationControl;

@interface BDImageAuthorizationManagerConfig : NSObject {
    NSArray *_addedComponents;
    NSArray *_addedFeatures;
    NSDictionary *_verifyErr;
    BDWebImageStartUpConfig *_startUpConfig;
    BDWebImageAuthorizationControl *_authorizationControl;
}

@property (class, readonly) BDImageAuthorizationManagerConfig *sharedInstance;

@property (copy, nonatomic) BDWebImageStartUpConfig *startUpConfig;
@property (retain, nonatomic) BDWebImageAuthorizationControl *authorizationControl;
@property (copy, nonatomic) NSArray *addedComponents;
@property (copy, nonatomic) NSArray *addedFeatures;
@property (copy, nonatomic) NSDictionary *verifyErr;
@property (readonly, copy, nonatomic) NSString *authorizationConfigDescription;

+ (id)sharedInstance;

- (void)setAuthorizationControl:(id)arg0;
- (void)setStartUpConfig:(id)arg0;
- (id)authorizationControl;
- (id)addedComponents;
- (id)addedFeatures;
- (void)startUpWithConfig:(id)arg0;
- (id)authorizationConfigDescription;
- (BOOL)isSupportHeifDecoding;
- (BOOL)isSupportHeifEncoding;
- (void)setAddedComponents:(id)arg0;
- (void)setAddedFeatures:(id)arg0;
- (id)verifyErr;
- (void)setVerifyErr:(id)arg0;
- (id)startUpConfig;
- (id)init;
- (void).cxx_destruct;

@end
