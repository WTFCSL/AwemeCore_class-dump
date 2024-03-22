//
//     Generated by private class-dump
//

@class NSMutableArray, BDCastGCDWebServerMIMEStreamParser;

@interface BDCastGCDWebServerMultiPartFormRequest : BDCastGCDWebServerRequest {
    BDCastGCDWebServerMIMEStreamParser *_parser;
    NSMutableArray *_arguments;
    NSMutableArray *_files;
}

@property (retain, nonatomic) NSMutableArray *arguments;
@property (retain, nonatomic) NSMutableArray *files;

+ (id)mimeType;

- (id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4;
- (id)firstArgumentForControlName:(id)arg0;
- (id)firstFileForControlName:(id)arg0;
- (void)setArguments:(id)arg0;
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)arguments;
- (BOOL)close:(id *)arg0;
- (BOOL)open:(id *)arg0;
- (id)description;
- (id)files;
- (void)setFiles:(id)arg0;

@end
