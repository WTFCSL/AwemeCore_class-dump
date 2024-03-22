//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEDynamicCardInsertResult : MTLModel <MTLJSONSerializing> {
    BOOL _success;
    long long _expectedInsertPos;
    long long _realInsertPos;
    NSString *_failReason;
    AWEAwemeModel *_awemeModel;
}

@property (nonatomic) long long expectedInsertPos;
@property (nonatomic) long long realInsertPos;
@property (copy, nonatomic) NSString *failReason;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (long long)expectedInsertPos;
- (void)setExpectedInsertPos:(long long)arg0;
- (long long)realInsertPos;
- (void)setRealInsertPos:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;
- (id)failReason;
- (void)setFailReason:(id)arg0;

@end