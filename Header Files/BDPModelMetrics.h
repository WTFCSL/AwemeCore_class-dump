//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface BDPModelMetrics : NSObject <NSCopying> {
    double _requestStart;
    double _requestEnd;
    double _readStart;
    double _readEnd;
    double _parseStart;
    double _parseEnd;
    NSDate *_loadEndDate;
}

@property (nonatomic) double requestStart;
@property (nonatomic) double requestEnd;
@property (nonatomic) double readStart;
@property (nonatomic) double readEnd;
@property (nonatomic) double parseStart;
@property (nonatomic) double parseEnd;
@property (readonly, nonatomic) NSString *source;
@property (copy, nonatomic) NSDate *loadEndDate;

- (double)parseStart;
- (void)setParseStart:(double)arg0;
- (void)setLoadEndDate:(id)arg0;
- (void)setReadEnd:(double)arg0;
- (id)loadEndDate;
- (void)setParseEnd:(double)arg0;
- (double)parseEnd;
- (void)setRequestStart:(double)arg0;
- (double)requestStart;
- (double)requestEnd;
- (void)setRequestEnd:(double)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setReadStart:(double)arg0;
- (double)readStart;
- (double)readEnd;

@end
