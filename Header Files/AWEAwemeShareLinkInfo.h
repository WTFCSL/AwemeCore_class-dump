//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAwemeShareLinkInfo : NSObject {
    NSString *_sharerID;
    NSString *_secSharerID;
    NSString *_linkID;
    NSString *_source;
}

@property (copy, nonatomic) NSString *sharerID;
@property (copy, nonatomic) NSString *secSharerID;
@property (copy, nonatomic) NSString *linkID;
@property (copy, nonatomic) NSString *source;

- (id)secSharerID;
- (void)setupLinkInfoWithParams:(id)arg0;
- (id)sharerID;
- (void)setSharerID:(id)arg0;
- (void)setSecSharerID:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setSource:(id)arg0;
- (id)initWithParams:(id)arg0;
- (id)linkID;
- (void)setLinkID:(id)arg0;

@end
