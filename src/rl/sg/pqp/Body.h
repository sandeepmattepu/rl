//
// Copyright (c) 2009, Markus Rickert
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

#ifndef RL_SG_PQP_BODY_H
#define RL_SG_PQP_BODY_H

#include "../Body.h"

namespace rl
{
	namespace sg
	{
		namespace pqp
		{
			class Model;
			
			class RL_SG_EXPORT Body : public ::rl::sg::Body
			{
			public:
				EIGEN_MAKE_ALIGNED_OPERATOR_NEW
				
				Body(Model* model);
				
				virtual ~Body();
				
				::rl::sg::Shape* create(::SoVRMLShape* shape);
				
				using ::rl::sg::Body::getFrame;
				
				::rl::math::Transform getFrame() const;
				
				void setFrame(const ::rl::math::Transform& frame);
				
				::rl::math::Transform frame;
				
			protected:
				
			private:
				
			};
		}
	}
}

#endif // RL_SG_PQP_BODY_H
