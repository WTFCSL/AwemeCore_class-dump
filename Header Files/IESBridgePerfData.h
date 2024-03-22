//
//     Generated by private class-dump
//

@interface IESBridgePerfData : NSObject {
    double _preDispatchTS;
    double _postDecodeTS;
    double _preExecuteTS;
    double _preCallbackTS;
    double _postEncodeTS;
    double _postCallbackTS;
}

@property (nonatomic) double preDispatchTS;
@property (nonatomic) double postDecodeTS;
@property (nonatomic) double preExecuteTS;
@property (nonatomic) double preCallbackTS;
@property (nonatomic) double postEncodeTS;
@property (nonatomic) double postCallbackTS;

- (void)setPreExecuteTS:(double)arg0;
- (void)setPreCallbackTS:(double)arg0;
- (void)setPostEncodeTS:(double)arg0;
- (void)setPostCallbackTS:(double)arg0;
- (double)postDecodeTS;
- (double)preDispatchTS;
- (double)preExecuteTS;
- (double)preCallbackTS;
- (double)postEncodeTS;
- (double)postCallbackTS;
- (void)setPreDispatchTS:(double)arg0;
- (void)setPostDecodeTS:(double)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)toDict;

@end
