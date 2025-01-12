//
//     Generated by private class-dump
//

@class NSString, RTVInteractionOperation;
@protocol Optional;

@interface RTVInteractionReplyOperation : JSONModel <RTVInteractionJSONModelProtocol> {
    long long _operationID;
    long long _replyOperationID;
    long long _roomID;
    long long _replyResult;
    long long _fromUserID;
    NSString *_replyDataString;
    RTVInteractionOperation<Optional> *_replyOperation;
    long long _source;
}

@property (nonatomic) long long operationID;
@property (nonatomic) long long replyOperationID;
@property (nonatomic) long long roomID;
@property (nonatomic) long long replyResult;
@property (nonatomic) long long fromUserID;
@property (copy, nonatomic) NSString *replyDataString;
@property (retain, nonatomic) RTVInteractionOperation<Optional> *replyOperation;
@property (readonly, nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (long long)fromUserID;
- (void)setFromUserID:(long long)arg0;
- (id)initWithTargetReplyOperation:(id)arg0 result:(BOOL)arg1 externBusinessData:(id)arg2;
- (long long)replyOperationID;
- (void)setupReplyOperation:(id)arg0;
- (void)updateSource:(long long)arg0;
- (id)replyDataString;
- (long long)replyResult;
- (id)contentDynamicCast:(Class)arg0;
- (void)setReplyOperationID:(long long)arg0;
- (void)setReplyResult:(long long)arg0;
- (void)setReplyDataString:(id)arg0;
- (id)replyOperation;
- (void)setReplyOperation:(id)arg0;
- (long long)operationID;
- (long long)source;
- (void).cxx_destruct;
- (void)setOperationID:(long long)arg0;
- (long long)roomID;
- (void)setRoomID:(long long)arg0;

@end
