//
//     Generated by private class-dump
//

@class NSSet, NSString, NSError;
@protocol IESIMConversationOperationResponse;

@interface AWEIMGroupJoinResult : NSObject {
    int _status;
    NSSet *_addedParticipants;
    id<IESIMConversationOperationResponse> _response;
    long long _checkCode;
    NSString *_checkMessage;
    NSString *_extraInfo;
    NSError *_error;
}

@property (readonly, copy, nonatomic) NSSet *addedParticipants;
@property (readonly, nonatomic) id<IESIMConversationOperationResponse> response;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) long long checkCode;
@property (readonly, copy, nonatomic) NSString *checkMessage;
@property (readonly, copy, nonatomic) NSString *extraInfo;
@property (readonly, nonatomic) NSError *error;

+ (id)resultWithAddedParticipants:(id)arg0 response:(id)arg1 status:(int)arg2 checkCode:(long long)arg3 checkMessage:(id)arg4 extraInfo:(id)arg5 error:(id)arg6;

- (id)checkMessage;
- (long long)checkCode;
- (id)initWithAddedParticipants:(id)arg0 response:(id)arg1 status:(int)arg2 checkCode:(long long)arg3 checkMessage:(id)arg4 extraInfo:(id)arg5 error:(id)arg6;
- (void).cxx_destruct;
- (int)status;
- (id)response;
- (id)error;
- (id)addedParticipants;
- (id)extraInfo;

@end
