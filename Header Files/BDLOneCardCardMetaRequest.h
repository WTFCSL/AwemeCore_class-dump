//
//     Generated by private class-dump
//

@class NSString;

@interface BDLOneCardCardMetaRequest : NSObject {
    NSString *_cardid;
    NSString *_version;
    long long _developer_id;
    NSString *_customer_id;
}

@property (retain) NSString *cardid;
@property (retain) NSString *version;
@property long long developer_id;
@property (copy, nonatomic) NSString *customer_id;

- (void)setDeveloper_id:(long long)arg0;
- (long long)developer_id;
- (id)customer_id;
- (void)setCustomer_id:(id)arg0;
- (id)cardid;
- (void)setCardid:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;

@end