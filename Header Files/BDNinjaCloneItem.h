//
//     Generated by private class-dump
//

@class NSString;

@interface BDNinjaCloneItem : NSObject {
    BOOL _shouldUploadOnline;
    NSString *_key;
    NSString *_identifier;
    id /* block */ _dataCollectionBlock;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ dataCollectionBlock;
@property (nonatomic) BOOL shouldUploadOnline;

- (void)setDataCollectionBlock:(id /* block */)arg0;
- (void)setShouldUploadOnline:(BOOL)arg0;
- (id /* block */)dataCollectionBlock;
- (BOOL)shouldUploadOnline;
- (id)initWithKey:(id)arg0;
- (id)key;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (void)setKey:(id)arg0;
- (void)setIdentifier:(id)arg0;

@end
