//
//     Generated by private class-dump
//

@protocol AWEEEUIAnnotationProtocol <NSObject>

- (id)originText;
- (id)hintText;
- (id)algs;
- (BOOL)needAlgPreprocess;
- (id)algPreprocess;
- (long long)maxImageCount;
- (struct CGSize { double x0; double x1; })croppingSize;
- (BOOL)isMultiAssetsProp;
- (long long)minImageCount;
- (long long)maxTextCount;
- (struct CGSize { double x0; double x1; })exportAssetSizeLimit;
- (void)callbackImage:(id)arg0 previewOnly:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)callbackText:(id)arg0 completion:(id /* block */)arg1;
- (void)updateVideo:(id)arg0 audioPath:(id)arg1 previewOnly:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)isImageEditable;
- (BOOL)isTextEditable;
- (void)updateVideo:(id)arg0 previewOnly:(BOOL)arg1 completion:(id /* block */)arg2;
- (long long)minTextCount;
- (unsigned long long)assetType;
- (id)relation;
- (id)placeholder;
- (id)name;
- (long long)albumFilter;

@end