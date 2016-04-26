/*
 * Copyright 2013 ZXing authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

@class ZXPDF417BoundingBox, ZXPDF417Codeword;

@interface ZXPDF417DetectionResultColumn : NSObject

@property (nonatomic, strong, readonly) ZXPDF417BoundingBox *boundingBox;
@property (nonatomic, strong, readonly) NSMutableArray *codewords;

- (id)initWithBoundingBox:(ZXPDF417BoundingBox *)boundingBox;
- (ZXPDF417Codeword *)codewordNearby:(int)imageRow;
- (int)imageRowToCodewordIndex:(int)imageRow;
- (void)setCodeword:(int)imageRow codeword:(ZXPDF417Codeword *)codeword;
- (ZXPDF417Codeword *)codeword:(int)imageRow;

@end
