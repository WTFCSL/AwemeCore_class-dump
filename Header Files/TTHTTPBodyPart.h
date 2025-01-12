//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface TTHTTPBodyPart : NSObject {
    BOOL _hasInitialBoundary;
    BOOL _hasFinalBoundary;
    unsigned long long _stringEncoding;
    NSDictionary *_headers;
    NSString *_boundary;
    id _body;
    unsigned long long _bodyContentLength;
}

@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *boundary;
@property (retain, nonatomic) id body;
@property (nonatomic) unsigned long long bodyContentLength;
@property (nonatomic) BOOL hasInitialBoundary;
@property (nonatomic) BOOL hasFinalBoundary;

- (void)setBodyContentLength:(unsigned long long)arg0;
- (void)setHasInitialBoundary:(BOOL)arg0;
- (void)setHasFinalBoundary:(BOOL)arg0;
- (BOOL)hasInitialBoundary;
- (BOOL)hasFinalBoundary;
- (unsigned long long)bodyContentLength;
- (id)stringForHeaders_;
- (void)setBody:(id)arg0;
- (id)body;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (id)getData;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(unsigned long long)arg0;
- (id)boundary;
- (void)setBoundary:(id)arg0;

@end
