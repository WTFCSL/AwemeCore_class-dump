//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveAddSongParamModel : IESLiveBridgeModel {
    id _song;
    NSString *_fromRequestType;
    NSString *_requestType;
    NSString *_queryUserId;
    NSString *_enterFrom;
    NSNumber *_requestMode;
}

@property (retain, nonatomic) id song;
@property (copy, nonatomic) NSString *fromRequestType;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *queryUserId;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *requestMode;

+ (id)modelCustomPropertyMapper;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)fromRequestType;
- (void)setFromRequestType:(id)arg0;
- (id)queryUserId;
- (void)setQueryUserId:(id)arg0;
- (void)setRequestMode:(id)arg0;
- (id)requestMode;
- (void)setRequestType:(id)arg0;
- (void).cxx_destruct;
- (id)requestType;
- (id)song;
- (void)setSong:(id)arg0;

@end
