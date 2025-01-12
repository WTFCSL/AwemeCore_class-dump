//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEIMFansGroupEntryLimitCommonModel : NSObject {
    BOOL _immediatelyPushEntryLimitVC;
    NSString *_cid;
    NSDictionary *_selectedLimitDict;
    NSDictionary *_serverExtra;
    NSDictionary *_clientExtra;
    NSString *_enterFrom;
    NSString *_enterMethod;
}

@property (copy, nonatomic) NSString *cid;
@property (nonatomic) BOOL immediatelyPushEntryLimitVC;
@property (copy, nonatomic) NSDictionary *selectedLimitDict;
@property (copy, nonatomic) NSDictionary *serverExtra;
@property (copy, nonatomic) NSDictionary *clientExtra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)clientExtra;
- (void)setClientExtra:(id)arg0;
- (id)serverExtra;
- (void)setServerExtra:(id)arg0;
- (void)setImmediatelyPushEntryLimitVC:(BOOL)arg0;
- (BOOL)immediatelyPushEntryLimitVC;
- (id)selectedLimitDict;
- (void)setSelectedLimitDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)cid;
- (void)setCid:(id)arg0;

@end
