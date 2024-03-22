//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface IESCommonVideoDashInfoPayload : NSObject {
    BOOL _ownPlayerPlayWithURLs;
    BOOL _enablePlayerBashVideo;
    BOOL _enablePlayerCheckHijack;
    NSArray *_hostArray;
    NSDictionary *_dashInfo;
}

@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (copy, nonatomic) NSArray *hostArray;
@property (nonatomic) BOOL enablePlayerBashVideo;
@property (nonatomic) BOOL enablePlayerCheckHijack;
@property (copy, nonatomic) NSDictionary *dashInfo;

- (BOOL)ownPlayerPlayWithURLs;
- (void)setOwnPlayerPlayWithURLs:(BOOL)arg0;
- (BOOL)enablePlayerBashVideo;
- (BOOL)enablePlayerCheckHijack;
- (id)dashInfo;
- (void)setDashInfo:(id)arg0;
- (void)setHostArray:(id)arg0;
- (void)setEnablePlayerBashVideo:(BOOL)arg0;
- (void)setEnablePlayerCheckHijack:(BOOL)arg0;
- (id)hostArray;
- (void).cxx_destruct;

@end
