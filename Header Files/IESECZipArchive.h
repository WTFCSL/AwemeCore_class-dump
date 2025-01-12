//
//     Generated by private class-dump
//

@class NSString;

@interface IESECZipArchive : NSObject {
    NSString *_path;
    NSString *_destination;
    NSString *_customAdditionName;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *destination;
@property (copy, nonatomic) NSString *customAdditionName;

+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 error:(id *)arg2;
+ (id)iesecDocumentPath;

- (id)initWithPath:(id)arg0 toDestination:(id)arg1;
- (void)setCustomAdditionName:(id)arg0;
- (id)unzip:(id *)arg0;
- (id)customAdditionName;
- (void)setPath:(id)arg0;
- (id)destination;
- (void).cxx_destruct;
- (void)setDestination:(id)arg0;
- (id)path;

@end
