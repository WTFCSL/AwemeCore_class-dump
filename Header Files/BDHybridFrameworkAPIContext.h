//
//     Generated by private class-dump
//

@class NSString;

@interface BDHybridFrameworkAPIContext : BDHybridAPIContext {
    double _outofdateTimestamp;
    NSString *_pageSessionId;
}

@property (nonatomic) double outofdateTimestamp;
@property (copy, nonatomic) NSString *pageSessionId;

- (double)outofdateTimestamp;
- (id)pageSessionId;
- (void)setOutofdateTimestamp:(double)arg0;
- (void)setPageSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
