//
//     Generated by private class-dump
//

@class NSURL, NSString;

@interface AWESECAppJumpContext : NSObject {
    NSURL *_targetURL;
    NSURL *_sourceHybridURL;
    unsigned long long _checkStartTime;
    NSString *_sqrID;
}

@property (retain, nonatomic) NSURL *targetURL;
@property (retain, nonatomic) NSURL *sourceHybridURL;
@property (nonatomic) unsigned long long checkStartTime;
@property (copy, nonatomic) NSString *sqrID;

- (void)setCheckStartTime:(unsigned long long)arg0;
- (void)setSourceHybridURL:(id)arg0;
- (void)setSqrID:(id)arg0;
- (id)sourceHybridURL;
- (unsigned long long)checkStartTime;
- (id)sqrID;
- (void).cxx_destruct;
- (id)targetURL;
- (void)setTargetURL:(id)arg0;

@end
