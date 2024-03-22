//
//     Generated by private class-dump
//

@class BDAThreadSafeDictionary, NSSet;

@interface BDACSWebReportProcessor : BDACSBaseProcessor {
    NSSet *_contentTypes;
    BDAThreadSafeDictionary *_filenames;
}

@property (readonly, nonatomic) BDAThreadSafeDictionary *filenames;
@property (readonly, copy, nonatomic) NSSet *contentTypes;

- (BOOL)shouldSaveFileItem:(id)arg0;
- (BOOL)shouldRemoveFileItem:(id)arg0 processorType:(unsigned long long)arg1;
- (void)dataCollectorDidSaveFile:(id)arg0;
- (void)dataCollectorDeallocating;
- (id)initWithConfig:(id)arg0 webURLString:(id)arg1 resourceManager:(id)arg2;
- (id)generateManifest;
- (void).cxx_destruct;
- (id)filenames;
- (id)contentTypes;

@end