//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, APBToygerBehavlogManager;
@protocol APBToygerDataCenterDelegate;

@interface APBToygerDataCenter : NSObject {
    BOOL _encrypt;
    NSString *_pubkey;
    id<APBToygerDataCenterDelegate> _delegate;
    NSMutableArray *_monitorImages;
    NSString *_monitorImageStr;
    APBToygerBehavlogManager *_behavlogManager;
    NSString *_bisToken;
    NSString *_panoImage;
    NSString *_cypherKey;
}

@property (weak, nonatomic) id<APBToygerDataCenterDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *monitorImages;
@property (copy, nonatomic) NSString *monitorImageStr;
@property (retain, nonatomic) APBToygerBehavlogManager *behavlogManager;
@property (copy, nonatomic) NSString *bisToken;
@property (copy, nonatomic) NSString *panoImage;
@property (copy, nonatomic) NSString *cypherKey;
@property (nonatomic) BOOL encrypt;
@property (copy, nonatomic) NSString *pubkey;

- (void)setEncrypt:(BOOL)arg0;
- (void)setBisToken:(id)arg0;
- (void)addBehavTask:(id)arg0;
- (id)bisToken;
- (void)clearTask;
- (void)addMonitorImage:(id)arg0 replacePanoImage:(id)arg1 andCypherKeyData:(id)arg2;
- (id)buildUploadRequestWithMonitorImage:(BOOL)arg0 behavLog:(BOOL)arg1 panoImage:(BOOL)arg2 invokeType:(id)arg3 retryCnt:(long long)arg4;
- (id)monitorImages;
- (void)setPanoImage:(id)arg0;
- (void)setCypherKey:(id)arg0;
- (id)behavlogManager;
- (void)clearMonitorImage:(BOOL)arg0 panoImage:(BOOL)arg1;
- (id)panoImage;
- (id)cypherKey;
- (id)rsaImage:(id)arg0 image:(id)arg1;
- (BOOL)hasFaceData;
- (id)buildUploadRequestWithRetryCnt:(long long)arg0;
- (id)buildUploadRequestWithContent:(id)arg0 cypherKey:(id)arg1 invokeType:(id)arg2 retryCnt:(long long)arg3;
- (void)setMonitorImages:(id)arg0;
- (id)monitorImageStr;
- (void)setMonitorImageStr:(id)arg0;
- (void)setBehavlogManager:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)clear;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)pubkey;
- (void)setPubkey:(id)arg0;
- (BOOL)encrypt;

@end