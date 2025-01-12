//
//     Generated by private class-dump
//

@class NSString, BDCastGCDWebServerRequest;
@protocol BDCastGCDWebServerBodyWriter;

@interface BDCastGCDWebServerBodyDecoder : NSObject <BDCastGCDWebServerBodyWriter> {
    BDCastGCDWebServerRequest *_request;
    id<BDCastGCDWebServerBodyWriter> _writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)arg0 writer:(id)arg1;
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
- (BOOL)close:(id *)arg0;
- (BOOL)open:(id *)arg0;

@end
